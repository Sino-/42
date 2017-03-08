#! /bin/bash
apt-get install -y openssh-server
perl -pi -e 's/Port 22/Port 51337/' /etc/ssh/sshd_config
/etc/init.d/ssh reload
