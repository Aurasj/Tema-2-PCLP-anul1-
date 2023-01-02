Programarea calculatoarelor şi limbaje de programare I

Tema 2

Fişiere în format Comma Separated Values (CSV). Un fişier CSV are format text și conține 
date numerice sau nenumerice separate, în mod uzual, prin virgulă. Prescurtarea CSV se 
foloseşte adeseori în sens mai larg şi se referă la fişiere care stochează datele sub forma
delimiter separated format, adică se poate opta si pentru alţi delimitatori cum ar fi punct şi 
virgula, tab, spaţiu. Exemple de date în format CSV delimitate prin virgulă sunt:
25.6,45.65,Brasov,Brasov,BV,323736,Centru
25.51,45.66,Ghimbav,Brasov,BV,5380,Centru

Dacă se optează pentru spațiu ca și delimitator, atunci datele sunt formatate astfel:
25.6 45.65 Brasov Brasov BV 323736 Centru
25.51 45.66 Ghimbav Brasov BV 5380 Centru
Atunci când natura valorilor este cunoscută dinainte, datele pot fi structurate în format tabelar 
cu linii şi coloane, unde fiecare linie reprezintă o înregistrare, iar liniile au structuri identice, 
lucru care facilitează citirea printr-un program a datelor de pe fiecare linie şi prelucrarea 
acestora. În exemplul de mai sus, fiecare linie constă din 7 valori numerice şi nenumerice 
astfel: două numere reale urmate de trei string-uri, o valoare întreagă şi din nou un string.
De obicei, fişierele CSV au pe linia 1 un header care conţine numele coloanelor. În exempul 
nostru, coloanele reprezintă latitudinea (X) şi longitudinea (Y) tuturor localităţilor din România, 
urmate de numele localităţii (NUME), judeţul (JUDET), codul auto al judeţului (JUDET_AUTO), 
populaţia localităţii la recensământul din 2002 (POPULATIE_(in_2002)) şi regiunea din care 
face parte localitatea (REGIUNE).
X,Y,NUME,JUDET,JUDET_AUTO,POPULATIE_(in_2002),REGIUNE
23.57,46.07,Alba_Iulia,Alba,AB,65091,Centru
23.58,46.1,Barabant,Alba,AB,2145,Centru
23.56,46.1,Micesti,Alba,AB,1420,Centru

Fişierul localitatiRO.csv conţine 13749 de înregistrări la care se adaugă header-ul. 

Realizați un program C++ care scrie într-un nou fişier lista localităţilor cu mai mult de 1000 de 
locuitori din vecinătatea unui punct ale cărui coordonate (latitudine şi longitudine) se citesc de 
la tastatură. Fişierului de ieşire se va numi vecini.csv și va avea un format similar lui 
localitatiRO.csv. Vecinătatea unui punct de coordonate (M,N) este formată din toate 
punctele (P,Q) ale căror coordonate îndeplinesc simultan condiţiile:
M-0,5 ≤ P ≤ M+0,5 şi N-0,5 ≤ Q ≤ N+0,5.

Exemplu. Presupunem că suntem interesaţi de lista localităţilor cu mai mult de 1000 de locuitori 
din vecinătatea municipiului Braşov. Introducem de la tastatură coordonatele 25.6 şi 45.65, iar 
programul va selecta din fişierul localitatiRO.csv localităţile care sunt în vecinătatea 
acestui punct conform definiţiei de mai sus şi care au peste 1000 de locuitori. Două dintre 
localităţile care fac parte din vecinătatea Braşovului şi au peste 1000 de locuitori sunt Ghimbav 
şi Codlea. Fişierul de ieşire va conţine toate informaţiile despre aceste localităţi:
25.51,45.66,Ghimbav,Brasov,BV,5380,Centru
25.45,45.7,Codlea,Brasov,BV,24547,Centru

2
Date de intrare
Două valori reale care sunt coordonatele punctului de referinţă
Fișierul localitatiRO.csv
Date de ieşire
Fișierul vecini.csv
Indicații: 
a) Datele din fișierul localitatiRO.csv sunt delimitate prin virgulă. Puteți să înlocuiți 
acest delimitator cu spațiul și să folosiți ca intrare noul fișier.
b) Pentru șirurile de caractere folosiți tipul de dată string.
Predarea temei se va face la orele de laborator ale fiecărei subgrupe. Studenţii care se prezintă 
cu altă grupă riscă să nu le fie luate în considerare temele.