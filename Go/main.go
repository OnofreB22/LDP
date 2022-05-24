//go run .

package main

import "fmt"

func main() {
	var bicis []bici
	var op int8
	var val bool = true

	for val{
		fmt.Println("Bienvenido\n1.Agregar Bici\n2.Ver lista\n3.Mostrar cantidad de bicis\n4.Remover bici\n5.Terminar Programa",)
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
			val = false
		default:
			fmt.Println("Por favor ingresa un input valido")
		}
	}
}

func addBici(bicis *[]bici){
	var nombre, telefono, email, marca, color, serial string

	fmt.Print("Ingresa los datos del usuario y su bici\nNombre: ")
	fmt.Scan(&nombre)
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

	p := NewPersona(nombre, telefono, email)
	b := NewBici(p, marca, color, serial)

	*bicis = append(*bicis, b)
}

func viewBici(bicis *[]bici){
	for _, element := range *bicis{
		element.ShowBici()
	}
}

func countBici(bicis *[]bici){
	fmt.Println(len(*bicis))
	fmt.Println("")
}

func removeBici(bicis *[]bici){
	var nombre string
	var newBicis []bici

	fmt.Println("Ingrese nombre de usuario a remover:")
	fmt.Scan(&nombre)
	
	for _, element := range *bicis{
		if element.usuario.name != nombre{
			newBicis = append(newBicis, element)
		}
	}
	*bicis = newBicis
}