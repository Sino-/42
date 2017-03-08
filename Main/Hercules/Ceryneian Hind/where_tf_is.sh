if [[ -z "$1" ]]; then
	echo "Usage is ./where_tf_is [userlist file]"
	exit
fi

RESET="\x1b[39;49;00m"
RED="\x1b[31;01m"
source .env
TOKEN=$(curl -s -X POST --data "grant_type=client_credentials&client_id=$WTF_UID&client_secret=$WTF_SECRET" https://api.intra.42.fr/oauth/token | awk -F '\"' '{print $4}')
while IFS='' read -r LINE || [[ -n "$LINE" ]]; do
	DATA=$(curl -s -G "https://api.intra.42.fr/v2/users/$LINE/locations?access_token=$TOKEN")
	END=$(echo $DATA | awk -F 'end_at\":' '{print $2}' | awk -F ',' '{print $1}')
	LOCATION=$(echo $DATA | awk -F 'host\":"' '{print $2}' | awk -F '\"' '{print $1}')
	if [[ "$END" == "null" ]]; then
		echo "$LINE\t-\t$LOCATION"
	else
		echo "$LINE\t-\t$RED UNAVAILABLE $RESET"
	fi
done < "$1"
