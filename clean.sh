#rm build -r && mkdir build 删除失败后面的指令就不执行了
**********************************设置命令返回是true，这样指令就会直接执行****************
rm -rf build || true
mkdir build