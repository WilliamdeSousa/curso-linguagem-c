listar_exercicios()
{
	cat lista.txt
	for i in `seq 1 10`;
	do
		arq=`printf "%.2d" $i`
		printf "// " > $arq.c
		cat lista.txt | grep -m 1 "$arq." -w >> $arq.c  
	done
}

run()
{
	gcc $1 -o $1.run -lm && ./$1.run && rm $1.run
}
