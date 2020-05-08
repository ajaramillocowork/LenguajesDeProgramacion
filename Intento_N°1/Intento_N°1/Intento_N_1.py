listaAlumnos = []
listaNotas = []

numeroDeAlumnos = int(input("Ingrese la cantidad de Alumnos = "))
for i in range (numeroDeAlumnos):
    listaAlumnos.append(input("ingrese el nombre del estudiante N° "+ str(i+1)+str(" = ")))
    listaNotas.append(int(input("ingrese el nota del estudiante N° "+ str(i+1)+str(" = " ))))

#listaAlumnos = [Alumno,Alumno1,Alumno2,Alumno3]
#listaNotas = [nota,nota1,nota2,nota3]

#Alumno = input ("ingrese el nombre del Alumno = ")
#nota = int(input("ingrese la nota del alumno = "))

#Alumno1 = input ("ingrese el nombre del Alumno = ")
#nota1 = int(input("ingrese la nota del alumno = "))

#Alumno1 = input ("ingrese el nombre del Alumno = ")
#nota1 = int(input("ingrese la nota del alumno = "))

#Alumno2 = input ("ingrese el nombre del Alumno = ")
#nota2 = int(input("ingrese la nota del alumno = "))

#Alumno3 = input ("ingrese el nombre del Alumno = ")
#nota3 = int(input("ingrese la nota del alumno = "))
 


ordenado = False
while ordenado == False:
    ordenado = True
    for i in range(len(listaNotas)-1):
        if(int(listaNotas[i]) < int(listaNotas[i+1])):
            auxiliarNota = listaNotas[i]
            auxiliarNombre = listaAlumnos[i]
            listaNotas[i] = listaNotas[i+1]
            listaAlumnos[i] = listaAlumnos [i+1]
            listaNotas[i+1] = auxiliarNota
            listaAlumnos[i+1] = auxiliarNombre
            ordenado = False

for i in range(len(listaNotas)):
    print (str(listaAlumnos[i]) + str(" = ")+ str(listaNotas[i]))
        

