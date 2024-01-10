## udev rule implementation 
- making udev rule and browsing the USB/ACM equipment option
```
$ sudo cp (file name with the path) /etc/udev/rules.d
$ udevadm info --name=/dev/ttyUSB(number) --attribute-walk
```
- checking some options
	- ATTR (idProduct, vendor, serial)
	- KERNEL name/number
- after doing all work
```
$ sudo udevadm control --reload-rules && udevadm trigger
$ sudo reboot (or just USB device disconnected and connected)
```
## check the status
```
$ ls -al /dev/(designated name)
```


