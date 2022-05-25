//go run .

package main

import (
	"fmt"
	"math/rand"
	"sort"
	"strconv"
	"strings"
	"time"
)

func main() {
	var bicis []bici
	var op int8
	var val bool = true

	for val{
		fmt.Println("Bienvenido\n1.Agregar Bici\n2.Ver lista\n3.Mostrar cantidad de bicis\n4.Remover bici\n5.Origanizar lista\n6.Crear 100 datos Dummies\n7.Terminar Programa",)
		fmt.Println("")
		fmt.Scanln(&op)
		switch op{
		case 1:
			addBici(&bicis)
		case 2:
			viewBici(&bicis)
		case 3:
			countBici(&bicis)
		case 4:
			removeBici(&bicis)
		case 5:
			sortBici(&bicis)
		case 6:
			for i := 0; i<100; i++{
				dummieList(&bicis)
			}
		case 7:
			val = false
		default:
			fmt.Println("Por favor ingresa un input valido")
		}
	}
}

func addBici(bicis *[]bici){
	var nombre, appellido, telefono, email, marca, color, serial string

	fmt.Print("Ingresa los datos del usuario y su bici\nNombre y apellido: ")
	fmt.Scan(&nombre)
	fmt.Scan(&appellido)
	fmt.Print("Telefono: ")
	fmt.Scan(&telefono)
	fmt.Print("Email: ")
	fmt.Scan(&email)

	fmt.Print("Marca: ")
	fmt.Scan(&marca)
	fmt.Print("Color: ")
	fmt.Scan(&color)
	fmt.Print("Serial: ")
	fmt.Scan(&serial)
	fmt.Println("")

	p := NewPersona(nombre+" "+appellido, telefono, email)
	b := NewBici(p, marca, color, serial)

	*bicis = append(*bicis, b)
}

func viewBici(bicis *[]bici){
	if len(*bicis) == 0{
		fmt.Println("No hay bicicletas")
	}
	for index, element := range *bicis{
		fmt.Println(strconv.Itoa(index+1)+".")
		element.ShowBici()
	}
}

func countBici(bicis *[]bici){
	fmt.Println("Hay "+strconv.Itoa(len(*bicis))+" bicicletas")
	fmt.Println("")
}

func removeBici(bicis *[]bici){
	var nombre, appellido string
	var newBicis []bici

	fmt.Println("Ingrese nombre y appellido de usuario a remover:")
	fmt.Scan(&nombre)
	fmt.Scan(&appellido)
	
	for _, element := range *bicis{
		if element.usuario.name != nombre+" "+appellido{
			newBicis = append(newBicis, element)
		}
	}
	*bicis = newBicis
}

func sortBici(bicis *[]bici){
	var colors []string
	var newBicis []bici

	for _, element := range *bicis{
		colors = append(colors, element.color)
	}

	//remover valores duplicados de la lista de colores
	inResult := make(map[string]bool)
    var result []string
    for _, str := range colors {
        if _, ok := inResult[str]; !ok {
            inResult[str] = true
            result = append(result, str)
        }
    }

	sort.Strings(result)
	fmt.Println(result)

	//organizar lista de bicicletas por color
	for _, res := range result{
		for _, element := range *bicis{
			if res == element.color{
				newBicis = append(newBicis, element)
			}
		}
	}

	*bicis = newBicis
}

func dummieList(bicis *[]bici){
	nombres := [42]string{"Hugo", "Martin", "Lucas", "Mateo", "Leo", "Daniel", "Alejandro", "Pablo", "Manuel", "Alvaro", "Adrian", "David", "Mario", "Enzo", "Diego", "Marcos", "Izan", "Javier", "Marco", "Alex", "Maria", "Jose", "Luis", "Luz", "Ana", "Carlos", "Juan", "Antonio", "Antonia", "Fernando", "Alberto", "Enrique", "Andres", "Miguel", "Santiago", "Valentina", "Daniela", "Mariana", "Natalia", "Camila", "Martha", "Nicolas"}
	apellidos := [39]string{"Alvarez", "Andrade", "Benitez", "Castillo", "Castro", "Contreras", "De Leon", "Diaz", "Duarte", "Espinoza", "Fernandez", "Flores", "Garcia", "Gimenez", "Gomez", "Gonzales", "Gutierrez", "Hernandez", "Jimenez", "Lopez", "Martinez", "Mejia", "Morales", "Moreno", "Perez", "Pineda", "Ramirez", "Reyes", "Rivas", "Rivera", "Rodrigo","Rojas", "Salazar", "Sanchez", "Santos", "Silva", "Torres", "Vargas", "Zambrano"}
	telefonos := [14]string{"310", "311", "312", "313", "314", "315", "316", "317", "318", "319", "320", "321", "322", "323"}
	emails := [7]string{"gmail.com", "hotmail.com", "msn.com", "yahoo.com", "eafit.edu.co", "outlook.com", "icloud.com"}
	marcas := [10]string{"Specialized", "Trek", "Cube bikes", "Cannondale", "BMC", "Ordea", "Santa Cruz", "Cervelo", "Shimano", "Benotto"}
	colores := [10]string{"amarillo", "naranja", "rojo", "violeta", "azul", "verde", "negro", "marron", "gris", "blanco"}

	rand.Seed(time.Now().UnixNano())

	var nombre string = nombres[rand.Intn(42)]
	var apellido string = apellidos[rand.Intn(39)]
	var telefono = telefonos[rand.Intn(14)]+strconv.Itoa(rand.Intn(8999999)+1000000)
	var email = strings.ToLower(nombre+apellido[0:1])+"@"+emails[rand.Intn(7)]

	var marca = marcas[rand.Intn(10)]
	var color = colores[rand.Intn(10)]
	var serial = strconv.Itoa(rand.Intn(899)+100)

	p := NewPersona(nombre+" "+apellido, telefono, email)
	b := NewBici(p, marca, color, serial)

	*bicis = append(*bicis, b)
}