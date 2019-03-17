Cadex Electrum Keep it Simple Instructions
=========================================

Cadexd
-----

electrum-cadex-server
---------------------

* Create a directory /var/electrum-cadex-server
	$sudo mkdir /var/electrum-cadex-server
* Chown the directory to the user you'll run the electrum-cadex-server as.
	$sudo chown user:user /var/electrum-cadex-server
* Install cadex_hash located in src/cadex_hash 
	$cd src/cadex_hash && sudo python setup.py install
*Install electrum-cadex-server
	$sudo ./configure
	$sudo python setup.py install

electrum-cadex-server configuration
---------------------------------

*By default, the configuration file is located in /etc/electrum-cadex.conf
*By defualt, the logfile is located in /var/log/electrum-cadex.log
*Check for both these files before attempting to run electrum-cadex-server.
	If they do not exist, create them and chown them to the user you'll be using.

