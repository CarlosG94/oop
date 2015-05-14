#pragma once

#include "List.h"
#include "Headwear.h"
#include "ShoppingCart.h"

#include <iostream>
#include <string.h>

using namespace std;

template <class Y>
class Store : public Headwear
{
protected:
    
    
public:
    
    Y* depot;
    Y* temporalDepot;
    int numElems;
    List<Headwear*> lista;

    
    /*Store()
    {
        lista.add(BaseballCap);
        lista.add(FootballCap);
        lista.add(BeanieForMen);
        lista.add(TopHat);
        lista.add(Sombrero);
        lista.add(ArmyBeret);
        lista.add(FruitHat);
        lista.add(CasualBeret);
        lista.add(CowboyHat);
        lista.add(RobbingMask);
    }*/
    
    void printThat()
    {
        int i;
        for (i = 0; i < numElems; i++) {
            cout << depot[i] << endl;
        }
    }
    
    void newProduct(string product)
    {
        temporalDepot = new Y[numElems];
        for(int i=0; i<numElems; i++){
            temporalDepot[i] = depot[i];
        }
        delete [] depot;
        numElems++;
        
        depot = new Y[numElems];
        for(int i = 0; i<numElems-1; i++){
            depot[i] = temporalDepot[i];
        }
        delete [] temporalDepot;
    }

    void deleteExpired()
    {
        int count=0, i;
        temporalDepot = new Y[numElems-1];
        for(i=0; i < numElems; i++)
        {
            if(depot[i]->getExpired()!= true)
            {
                temporalDepot[count] = depot[i];
                count++;
            }
        }
        delete [] depot;
        numElems--;
        depot = new Y[numElems];
        for(int i=0; i<numElems; i++)
            depot[i] = temporalDepot[i];
        delete [] temporalDepot;
    }
    
    
};
/*
template <class O>
class Tienda{
    int items;
    O* almacen;
    O* almacenTemp;
    O* carrito;
    O* carritoTemp;
    O* vendido;
    O* vendidoTemp;
    int itemsCarrito;
    int itemsVendido;
    int computadoras;
    int discosDuros;
    int teclados;
    int mice;
    int headsets;
    int tablets;
    int smartphones;
    int juegosPC;
    int juegosMac;
    int juegosXbox;
    int ganancia;
    int precioTotal;
    int ventas;
    int ano;
    int mes;
    int dia;
    
public:
    Tienda(){	// se crea un arreglo para guardar objetos con 1 solo espacio, si se quieren agregar
        //más objetos, cambia de tamaño el arreglo.
        items = 10;
        itemsVendido=0;
        itemsCarrito=0;
        computadoras=1;
        discosDuros=1;
        mice=1;
        teclados=1;
        headsets=1;
        tablets=1;
        smartphones=1;
        juegosPC=1;
        juegosMac=1;
        juegosXbox=1;
        ganancia=0;
        precioTotal=0;
        ventas=0;
        almacen = new O[items];
        carrito = new O[itemsCarrito];
        vendido = new O[itemsVendido];
        
        almacen[0] = new Computadora("Apple", "OSX", 16, 512, 3.4, 3000, 4500);
        almacen[1] = new DiscoDuro("Samsung", 1000, 1000, 1500);
        almacen[2] = new Mouse("Logitech", "Sí", "Blanco", "Sí", 800, 1000);
        almacen[3] = new Headset("Steelseries", "Sí", "Negro", "Sí", 1300, 1600);
        almacen[4] = new Teclado("Logitech", "Sí", "Negro", "Sí", 900, 1100);
        almacen[5] = new Tablet("Apple", "iOS", 64, 8, 2400, 2700);
        almacen[6] = new Smartphone("Motorola", "Android", 32, 8, "Sí", 3000, 3500);
        almacen[7] = new JuegoPC("League of Legends", "Riot", "No", 800, 1000);
        almacen[8] = new JuegoMac("LIMBO", "EA", "No", 800, 1000);
        almacen[9] = new JuegoXbox("Halo", "Bungie", "Sí", 800, 1000);
        
        cout << "\n\n\nIntroduce la fecha (d/m/a) separada por espacios: ";
        cin >> dia;
        cin >> mes;
        cin >> ano;
        
        setItemsFecha();
    }
    
    ~Tienda(){delete [] almacen;}
    
    int getItems(){return items;}
    int getItemsCarrito(){return itemsCarrito;}
    int getComputadoras(){return computadoras;}
    int getDiscosDuros(){return discosDuros;}
    int getMice(){return mice;}
    int getTeclados(){return teclados;}
    int getHeadsets(){return headsets;}
    int getTablets(){return tablets;}
    int getSmartphones(){return smartphones;}
    int getJuegosPC(){return juegosPC;}
    int getJuegosMac(){return juegosMac;}
    int getJuegosXbox(){return juegosXbox;}
    int getDia(){return dia;}
    int getMes(){return mes;}
    int getAno(){return ano;}
    void setFecha(){
        cout << "Día: ";
        cin >> dia;
        cout << "Mes: ";
        cin >> mes;
        cout << "Ano: ";
        cin >> ano;
        for(int i=0; i<items; i++){
            almacen[i]->setCaducado();
        }
    }
    
    void setItemsFecha(){
        for(int i=0; i<items; i++){
            almacen[i]->setDia(getDia());
            almacen[i]->setMes(getMes());
            almacen[i]->setAno(getAno());
        }
    }
    
    void mostrarTodos(){
        for(int i=0; i<items; i++){
            cout << "\n[" << i+1  << "]";
            almacen[i]->printMe();
        }
    }
    
    void mostrarTodosNoCaducados(){
        for(int i=0; i<items; i++){
            if(almacen[i]->getCaducado()=="No"){
                cout << "\n[" << i+1  << "]";
                almacen[i]->printMe();
            }
        }
    }
    
    void mostrarCarrito(){
        for(int i=0; i<itemsCarrito; i++){
            cout << "\n[" << i+1  << "]";
            carrito[i]->printMe();
        }
    }
    
    void mostrarPapa(string buscar){
        int count=1;
        for(int i=0; i<items; i++){
            if(almacen[i]->getPapa()==buscar){
                cout << "\n[" << i+1 << "]";
                almacen[i]->printMe();
                count++;
            }
        }
        if(count==1) cout << "No hay productos de ese tipo." << endl;
    }
    
    void mostrarTipo(string buscar){
        int count=1;
        for(int i=0; i<items; i++){
            if(almacen[i]->getTipo()==buscar){
                cout << "\n[" << i+1 << "]";
                almacen[i]->printMe();
                count++;
            }
        }
        if(count==1) cout << "No hay productos de ese tipo." << endl;
    }
    
    void newItem(string item){
        almacenTemp = new O[items];
        for(int i=0; i<items; i++){
            almacenTemp[i] = almacen[i];
        }
        delete [] almacen;
        items++;
        
        almacen = new O[items];
        for(int i=0; i<items-1; i++){
            almacen[i] = almacenTemp[i];
        }
        
        if(item=="Computadora"){
            almacen[items-1] = new Computadora();
            computadoras++;
        }
        if(item=="DiscoDuro"){
            almacen[items-1] = new DiscoDuro();
            discosDuros++;
        }
        if(item=="Teclado"){
            almacen[items-1] = new Teclado();
            teclados++;
        }
        if(item=="Mouse"){
            almacen[items-1] = new Mouse();
            mice++;
        }
        if(item=="Headset"){
            almacen[items-1] = new Headset();
            headsets++;
        }
        if(item=="Tablet"){
            almacen[items-1] = new Tablet();
            tablets++;
        }
        if(item=="Smartphone"){
            almacen[items-1] = new Smartphone();
            smartphones++;
        }
        if(item=="JuegoPC"){
            almacen[items-1] = new JuegoPC();
            juegosPC++;
        }
        if(item=="JuegoMac"){
            almacen[items-1] = new JuegoMac();
            juegosMac++;
        }
        if(item=="JuegoXbox"){
            almacen[items-1] = new JuegoXbox();
            juegosXbox++;
        }
        delete [] almacenTemp;
    }
    
    void addCarrito(int index){
        if(index<items){
            cout << almacen[index]->getTipo() << " ha sido agregado al carrito.." << endl;
            carritoTemp = new O[itemsCarrito];
            for(int i=0; i<itemsCarrito; i++) carritoTemp[i]=carrito[i];
            itemsCarrito++;
            delete [] carrito;
            carrito = new O[itemsCarrito];
            for(int i=0; i<itemsCarrito-1; i++) carrito[i]=carritoTemp[i];
            delete [] carritoTemp;
            carrito[itemsCarrito-1]=almacen[index];
            index++;
            deleteItem(index);
        } else { cout << "\nProducto no existe." << endl;}
    }
    
    void totalVentas(){
        ventas = 0;
        cout << "\nEl total de ventas ha sido de: $";
        for(int i=0; i<itemsVendido; i++) ventas += vendido[i]->getPrecioVenta();
        cout << ventas;
        ganancia = ventas;
        cout << "\nCon una ganancia de: $";
        for(int i=0; i<itemsVendido; i++) ganancia -= vendido[i]->getPrecioOriginal();
        cout << ganancia << endl;
        cout << "Productos vendidos:";
        for(int i=0; i<itemsVendido; i++){
            cout << "\n\n[" << i+1 << "]";
            vendido[i]->printMe();
            cout << "Precio Original: $" << vendido[i]->getPrecioOriginal() << endl;
        }
    }
    
    void ventasTipo(string buscar){
        int ventasTipo;
        ventasTipo = 0;
        cout << "\nLas ventas han sido de: $";
        for(int i=0; i<itemsVendido; i++){
            if(vendido[i]->getPapa() == buscar){
                ventasTipo += vendido[i]->getPrecioVenta();
            }
        }
        cout << ventasTipo;
        int count=1;
        cout << "\n" << buscar << "s vendidos:" << endl;
        for(int i=0; i<itemsVendido; i++){
            if(vendido[i]->getPapa() == buscar){
                cout << "\n[" << count << "]";
                vendido[i]->printMe();
                cout << "Precio Original: $" << vendido[i]->getPrecioOriginal() << endl;
                count++;
            }
        }
    }
    
    void ventasBuscar(string buscar){
        int ventasProducto;
        ventasProducto=0;
        cout << "\nLas ventas han sido de: $";
        for(int i=0; i<itemsVendido; i++){
            if(vendido[i]->getTipo() == buscar){
                ventasProducto += vendido[i]->getPrecioVenta();
            }
        }
        cout << ventasProducto << endl;
        cout << buscar << " vendid@s:" << endl;
        int count=1;
        for(int i=0; i<itemsVendido; i++){
            if(vendido[i]->getTipo()==buscar){
                cout << "\n[" << count << "]";
                vendido[i]->printMe();
                cout << "Precio Original: $" << vendido[i]->getPrecioOriginal() << endl;
                count++;
            }
        }
    }
    
    void comprar(){
        int count=0;
        precioTotal=0;
        cout << "\nCompra finalizada...\nPrecio total de Compra: $";
        vendidoTemp = new O[itemsVendido];
        for(int i=0; i<itemsVendido; i++){
            vendidoTemp[i] = vendido[i];
            count++;
        }
        delete [] vendido;
        for(int i=0; i<itemsCarrito; i++){
            precioTotal += carrito[i]->getPrecioVenta();
            itemsVendido++;
        }
        vendido = new O[itemsVendido];
        for(int i=0; i<count; i++) vendido[i] = vendidoTemp[i];
        delete [] vendidoTemp;
        for(int i=0; i<itemsCarrito; i++){
            vendido[i+count] = carrito[i];
        }
        delete [] carrito;
        itemsCarrito = 0;
        carrito = new O[itemsCarrito];
        cout << precioTotal << endl;
    }
    
    void deleteItem(int pos){
        pos--;
        int count=0;
        almacenTemp= new O[items-1];
        cout << almacen[pos]->getTipo() << " eliminado del almacén." << endl;
        for(int i=0; i<items; i++){
            if(i!=pos){
                almacenTemp[count] = almacen[i];
                count++;
            }
        }
        delete [] almacen;
        items--;
        almacen = new O[items];
        for(int i=0; i<items; i++) almacen[i]=almacenTemp[i];
        delete [] almacenTemp;
    }
    
    void deleteCaducados(){
        int count=0;
        almacenTemp= new O[items-1];
        for(int i=0; i<items; i++){
            if(almacen[i]->getCaducado()!="Sí"){
                almacenTemp[count] = almacen[i];
                count++;
            }
        }
        delete [] almacen;
        items--;
        almacen = new O[items];
        for(int i=0; i<items; i++) almacen[i]=almacenTemp[i];
        delete [] almacenTemp;
    }
};

//Pasar el agregar producto para acá y que se le agregue directo al almacén en vez de nombrar uno*/