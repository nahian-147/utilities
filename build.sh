if [ ! -d $(pwd)"/bin" ]
then
    mkdir  bin
fi

for c_source in $(ls *.c)
do
    echo ${c_source};
    gcc ${c_source} -o ${c_source%.*};
    mv ${c_source%.*} $(pwd)"/bin/";
done

file=$HOME"/"".""bashrc";

path="export PATH=""$""PATH:"${HOME}"/utilities/bin";

if ! grep -q "${path}" ${file};
then
  echo Setting ${path} as path in bashrc file;
  echo $path >> $file;
fi