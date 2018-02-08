# OMNeT 3.4b2 
* Compiles in Ubuntu 16.02 with the default gxx-5.4

## How to install

1. Set-up the environment
```
	$ source envi-sin.sh
```

2. Install the necessary libraries and dependencies
```
	sudo apt-get install build-essential gcc g++ bison flex perl tcl8.4 tcl8.4-dev tk8.4 tk8.4-dev blt-dev libxml2-dev zlib1g-dev libx11-dev libpcap-dev	
```
3. Compile
```
	./configure
	make
```
4. Check samples
```
	cd samples/aloha
	./aloha
```
## Known Issues

* dyna demo is not working
* something tk/tcl env 

## List of updates

    Refer to [fixes.txt](fixes.txt)
