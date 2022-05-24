package main

import "fmt"

type bici struct{
	usuario persona
	modelo string
	color string
	serial string
}

func NewBici(u persona, m string, c string, s string) bici{
	return bici{usuario: u, modelo: m, color: c, serial: s}
}

func (b *bici) ShowBici(){
	b.usuario.Show()
	fmt.Println(b.modelo+" "+b.color+" "+b.serial)
	fmt.Println("")
}