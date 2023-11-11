#pragma once
class Model
{
private:
	struct vertex {
		double ver[3];
		double N[3];
	};
	struct face {
		double N[3];
		int tri[3];
	};

	vertex* V;
	face* F;

	int nvert, nface;


public:
	Model();
	Model(std::string name);
	~Model();

	void DrawM();
	// Funcion sobrecargada mismo nombre, dif variables de entrada
public:
	void DrawM(float diff[4]);
private:
	void CalcNorm(double a[3], double b[3], double c[3], double N[3]); //Funcion general
	void CalcNormsF(); //Para calcular las norms de los face reutilizando CalcNorm
	void CalcNormsV(); //Para calcular las norms de los vertices reutilizando CalcNorm

protected: //Nuevo tipo de encapsulamiento
	void ReadM3D(std::string name);
};


// Agregar funciones
class Hadouken : public Model
{
public:
	Hadouken(std::string name);
	void Idle();
	void RealizarMovimiento(bool& direccion, float& posicion, Hadouken* blue);
};