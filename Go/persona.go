package main

import "fmt"

type persona struct{
	name string
	telefono string
	email string
}

func NewPersona(n string, t string, e string) persona{
	return persona{name: n, telefono: t, email: e}
}

func (p *persona) Show(){
	fmt.Println("Nombre: "+p.name+" Telefono: "+p.telefono+" Email: "+p.email)	
}