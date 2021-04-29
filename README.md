# pubsub_broker-less

依赖：open62541 v1.2
参考：https://blog.csdn.net/whahu1989/article/details/99189801
https://blog.csdn.net/whahu1989/article/details/112735217

## open62541编译流程

```
sudo apt-get install git build-essential gcc pkg-config cmake python
# enable additional features
sudo apt-get install cmake-curses-gui # for the ccmake graphical interface
sudo apt-get install libmbedtls-dev # for encryption support
sudo apt-get install check libsubunit-dev # for unit tests
sudo apt-get install python-sphinx graphviz # for documentation generation
sudo apt-get install python-sphinx-rtd-theme # documentation style

git clone -b v1.2  https://github.com/open62541/open62541.git
cd open62541
mkdir build
cd build
cmake -DUA_ENABLE_PUBSUB=ON -DUA_ENABLE_PUBSUB_ETH_UADP=ON ..
make
```


