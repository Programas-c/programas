n=0
YBandera=0

while True:
	try:
		partNum1 = ""
		partNum2 = ""
		watPart = 0
		a = input()
		for i in range(len(a)):
			if a[i]==" ":
				watPart = 1
			elif watPart==0:
				partNum1 = partNum1 + a[i]
			elif watPart==1:
				partNum2 = partNum2 + a[i]
		a = int(partNum1)
		b = int(partNum2)
		aAux = a;
		bAux = b;
		if a>b:
			banderaIn = a
			a = b
			b = banderaIn
		ZMaximo = 0
		for i in range(a, b+1, 1):
			n = i
			XCInterno = 1
			while XCInterno>=1:
				if n>1:
					XCInterno=XCInterno+1
					if n%2!=0:
						n=3*n+1
					else:
						n=n//2
				else:
					YBandera = XCInterno
					break
			if YBandera>ZMaximo:
				ZMaximo=YBandera
		print(str(aAux)+" "+str(bAux)+" "+str(ZMaximo))
	except EOFError:
		break
	