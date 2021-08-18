/**
scanf("%c", &c);		// Lê o próximo caractere
scanf("%13c", s);		// Lê 13 caracteres guardando-os no vetor s
scanf(" %c", &c);		// Pula caracteres brancos e lê o caractere seguinte

c = cin.get();		// Lê o próximo caractere
cin.get(c);			// Lê o próximo caractere
cin >> c;			// Pula caracteres brancos e lê o caractere seguinte

gets(s);		// Lê uma linha excluindo o '\n', descarta o '\n' e coloca '\0' no final
fgets(s,tam,stdin);	// Lê uma linha incluindo o '\n' e coloca '\0' no final

cin.getline(s,tam); // Lê uma linha excluindo o '\n', descarta o '\n' e coloca '\0' no final
cin.get(s,tam); // Lê uma linha excluindo o '\n', mantém o '\n' no buffer e coloca '\0' no final

**/