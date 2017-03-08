#! /bin/bash
if [[ $(uname) == "Darwin" ]]; then
	echo "please run on a real unix distro to test. 42's Mac O SX is locked down and the *at* command is finicky in this environment"
else
	at 8:42 AM Dec 21 < payload.sh
fi
