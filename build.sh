rootDir=$(pwd);
srcDir=$rootDir"/src";
binDir=$rootDir"/bin";

if [ ! -d $rootDir"/bin" ]
then
    mkdir  bin
fi

cd ${srcDir};

echo Compiling Source Codes...

for c_source in $(ls *.c)
do
    echo ${c_source};
    gcc ${c_source} -o ${c_source%.*};
    mv ${c_source%.*} $binDir;
done

for c_source in $(ls *.cpp)
do
    echo ${c_source};
    g++ ${c_source} -o ${c_source%.*};
    mv ${c_source%.*} $binDir;
done

echo Done Compiling.

file=$HOME"/"".""bashrc";

path="export PATH=""$""PATH:"$binDir;

if ! grep -q "${path}" ${file};
then
  echo Setting ${path} as path in bashrc file;
  echo $path >> $file;
fi
