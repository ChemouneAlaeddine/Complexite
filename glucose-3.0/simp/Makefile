EXEC = glucose
DEPDIR    = mtl utils core
MROOT = $(PWD)/..

all:
	gcc ../../satfile.c ../../test1.c -o ../tests/test1
	./../tests/test1 ../tests/test1.sat
	rm ../tests/test1

	gcc ../../satfile.c ../../test2.c -o ../tests/test2
	./../tests/test2 ../tests/test2.sat
	rm ../tests/test2

	gcc ../../satfile.c ../../10K2.c -o ../tests/10K2
	./../tests/10K2 ../tests/10K2.sat
	rm ../tests/10K2

	gcc ../../satfile.c ../../C10.c -o ../tests/C10
	./../tests/C10 ../tests/C10.sat
	rm ../tests/C10

	#gcc ../../satfile.c ../../G36.c -o ../tests/G36
	#./../tests/G36 ../tests/G36.sat
	#rm ../tests/G36

	gcc ../../satfile.c ../../kneser62.c -o ../tests/kneser62
	./../tests/kneser62 ../tests/kneser62.sat
	rm ../tests/kneser62

	gcc ../../satfile.c ../../kneser72.c -o ../tests/kneser72
	./../tests/kneser72 ../tests/kneser72.sat
	rm ../tests/kneser72

	gcc ../../satfile.c ../../kneser73.c -o ../tests/kneser73
	./../tests/kneser73 ../tests/kneser73.sat
	rm ../tests/kneser73

	#gcc ../../satfile.c ../../kneser83.c -o ../tests/kneser83
	#./../tests/kneser83 ../tests/kneser83.sat
	#rm ../tests/kneser83

	gcc ../../satfile.c ../../m47.c -o ../tests/m47
	./../tests/m47 ../tests/m47.sat
	rm ../tests/m47

	#gcc ../../satfile.c ../../m95.c -o ../tests/m95
	#./../tests/m95 ../tests/m95.sat
	#rm ../tests/m95

	gcc ../../satfile.c ../../petersen.c -o ../tests/petersen
	./../tests/petersen ../tests/petersen.sat
	rm ../tests/petersen

	gcc ../../satfile.c ../../sierp3.c -o ../tests/sierp3
	./../tests/sierp3 ../tests/sierp3.sat
	rm ../tests/sierp3

	# Graphe_camarades

	gcc ../../satfile.c ../../Graphes_camarades/chvatal.c -o ../tests/chvatal
	./../tests/chvatal ../tests/chvatal.sat
	rm ../tests/chvatal

	gcc ../../satfile.c ../../Graphes_camarades/golomb.c -o ../tests/golomb
	./../tests/golomb ../tests/golomb.sat
	rm ../tests/golomb

	#gcc ../../satfile.c ../../Graphes_camarades/hypercube8.c -o ../tests/hypercube8
	#./../tests/hypercube8 ../tests/hypercube8.sat
	#rm ../tests/hypercube8

	gcc ../../satfile.c ../../Graphes_camarades/moser.c -o ../tests/moser
	./../tests/moser ../tests/moser.sat
	rm ../tests/moser


include $(MROOT)/mtl/template.mk

clean:
	rm ../tests/*
