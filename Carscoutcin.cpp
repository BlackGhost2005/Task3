//#include <iostream>
//#include<cassert>
//using namespace std;
//
//typedef unsigned short int ushort;
//
//
//
//enum Colors { None, Black = 1, Green, Red, Blue, Yellow, White, Purple, Gray, Orange, Pink };
//
//class Car
//{
//private:
	//static ushort _static_id;
//	ushort _id;
//	char* _make;
//	char* _model;
//	Colors _color;
//	ushort _year;
//	float _engine;
//public:
//
//	// All COnstructors
//	Car();
//	Car(const char* make, const char* model, Colors color);
//	Car(const char* make, const char* model, Colors color, ushort year, float engine);
//
//
//
//	Car(const Car& otherCar)
//	{
//		cout << "Copy" << endl;
//		this->_id = ++_static_id;
//		SetMake(otherCar._make);
//		SetModel(otherCar._model);
//		SetColor(otherCar._color);
//		SetYear(otherCar._year);
//		SetEngine(otherCar._engine);
//	}
//
//	// copy assigment operator
//	Car& operator=(const Car& otherCar)
//	{
//
//		cout << "Assigment" << endl;
//		this->SetMake(otherCar._make);
//		this->SetModel(otherCar._model);
//		this->SetColor(otherCar._color);
//		this->SetYear(otherCar._year);
//		this->SetEngine(otherCar._engine);
//
//
//		return *this;
//	}
//
//
//	// All Get Methods
//	static ushort GetStaticId();
//	ushort GetId()const;
//	const char* GetMake()const;
//	const char* GetModel()const;
//	Colors GetColor()const;
//	ushort GetYear() const;
//	float GetEngine()const;
//
//	// All Set Methods
//
//	void SetMake(const char* make);
//	void SetModel(const char* model);
//	void SetColor(Colors color);
//	void SetYear(ushort year);
//	void SetEngine(float engine);
//
//	// GetColorName
//	const char* GetColorName() const;
//
//
//	// print
//	void Show();
//
//
//	// Destructor
//	~Car();
//
//	friend ostream& operator << (ostream& out, const Car& c);
//	friend istream& operator >> (istream& input, Car& c);
//};
//
//
//ostream& operator << (ostream& out, const Car& c)
//{
//	out << "Id: " << c._id << endl;
//	out << "Make: " << (c._make != NULL ? c._make : "NULL") << endl;
//	out << "Model: " << (c._model != NULL ? c._model : "Null") << endl;
//	out << "Color: " << c.GetColorName() << endl;
//	out << "Engine: " << c._engine << endl;
//	out << "Year: " << c._year << endl;
//	out << "-----------------------------------" << endl;
//
//	return out;
//}
//
//istream& operator >> (istream& input, Car& c)
//{
//	cout << "Enter Make: ";
//	cin.ignore();
//	char* make = new char[100];
//	input >> make;
//	c.SetMake(make);
//
//	cout << "Enter Model ";
//	cin.ignore();
//	char* model = new char[100];
//	input >> model;
//	c.SetModel(model);
//
//
//	cout << "Enter Year ";
//	cin.ignore();
//	int year;
//	input >> year;
//	c.SetYear(year);
//
//	cout << "Enter Engine ";
//	cin.ignore();
//	float engine;
//	input >> engine;
//	c.SetEngine(engine);
//
//	return input;
//}
//
//// -------------------------------------------------------------------------------------------------------
//// Out Of Class
//// -------------------------------------------------------------------------------------------------------
//
//ushort Car::_static_id = 0;
//
//// All Get Methods
//ushort Car::GetStaticId() { return _static_id; }
//ushort Car::GetId()const { return this->_id; }
//const char* Car::GetMake()const { return this->_make; }
//const char* Car::GetModel()const { return this->_model; }
//Colors Car::GetColor()const { return this->_color; }
//ushort Car::GetYear() const { return this->_year; }
//float Car::GetEngine()const { return this->_engine; }
//
//
//
//// All Set Methods
//
//void Car::SetMake(const char* make)
//{
	//int len = strlen(make);
	//if (len >= 1)
	//{
	//	if (this->_make != NULL)
	//		delete[] this->_make;

	//	this->_make = new char[++len];
	//	strcpy_s(this->_make, len, make);
	//}
	//else
	//{
	//	assert(!"Marka adi boshdur");
	//}
//}
//void Car::SetModel(const char* model)
//{
//	int len = strlen(model);
//	if (len >= 1)
//	{
//		if (this->_model != NULL)
//			delete[] this->_model;
//
//		this->_model = new char[++len];
//		strcpy_s(this->_model, len, model);
//	}
//	else
//	{
//		assert(!"Model adi boshdur");
//	}
//}
//void Car::SetColor(Colors color)
//{
//	this->_color = color;
//}
//void Car::SetYear(ushort year)
//{
//	if (year >= 1995 && year <= 2023)
//	{
//		this->_year = year;
//		return;
//	}
//	assert(!"Mashinin Ili dogru deyil");
//}
//void Car::SetEngine(float engine)
//{
//	if (engine >= 1.0 && engine <= 6.2)
//	{
//		this->_engine = engine;
//		return;
//	}
//	assert(!"Mator gucu uygun deyil");
//
//}
//
//
//// All COnstructors
//Car::Car()
//{
//	_id = ++_static_id;
//	_make = NULL;
//	_model = NULL;
//	_color = Colors::None;
//	_year = 0;
//	_engine = 0;
//}
//Car::Car(const char* make, const char* model, Colors color) : Car()
//{
//	SetMake(make);
//	SetModel(model);
//	SetColor(color);
//
//}
//Car::Car(const char* make, const char* model, Colors color, ushort year, float engine) : Car(make, model, color)
//{
//	SetYear(year);
//	SetEngine(engine);
//}
//
//// GetColorName
//const char* Car::GetColorName() const
//{
//	switch (this->_color)
//	{
//	case None:		return "None";
//	case Black:		return "Black";
//	case Green:		return "Green";
//	case Red:		return "Red";
//	case Blue:		return "Blue";
//	case Yellow:	return "Yellow";
//	case White:		return "White";
//	case Purple:	return "Purple";
//	case Gray:		return "Gray";
//	case Orange:	return "Orange";
//	case Pink:		return "Pink";
//	}
//}
//
//// print
//void Car::Show()
//{
//	cout << "-----------------------------------" << endl;
//	cout << "Id: " << _id << endl;
//	cout << "Make: " << (_make != NULL ? _make : "NULL") << endl;
//	cout << "Model: " << (_model != NULL ? _model : "Null") << endl;
//	cout << "Color: " << this->GetColorName() << endl;
//	cout << "Engine: " << _engine << endl;
//	cout << "Year: " << _year << endl;
//	cout << "-----------------------------------" << endl;
//}
//
//// Destructor
//Car::~Car()
//{
//	delete[] _make;
//	delete[] _model;
//}
//
//
//
//class CarGallery
//{
//private:
//	char* _name;
//	Car** _cars;
//	ushort _count;
//
//public:
//	CarGallery() = delete;
//	CarGallery(const char* name);
//	CarGallery(const char* name, Car**& cars, ushort count);
//
//
//	CarGallery(const CarGallery& other)
//	{
//		SetName(other._name);
//		this->_count = other._count;
//
//		this->_cars = new Car * [other._count];
//		for (size_t i = 0; i < other._count; i++)
//			this->_cars[i] = new Car(*other._cars[i]);
//	}
//
//
//
//	void SetName(const char* name);
//	void SetCars(Car**& cars, ushort count);
//
//
//
//	const char* GetName();
//	Car** GetCars();
//	int GetCount();
//
//
//	void Clear();
//	void Pop();
//	void Append(Car* car);
//	void DeleteById(int id);
//	const Car* GetElementById(int id);
//
//	void Show();
//
//
//	~CarGallery();
//
//
//};
//
//
//
//// --------------------------------------------------------
//void CarGallery::SetName(const char* name)
//{
//	int len = strlen(name);
//	if (len >= 3)
//	{
//		if (this->_name != NULL)
//			delete[] this->_name;
//
//		this->_name = new char[++len];
//		strcpy_s(this->_name, len, name);
//	}
//	else
//	{
//		assert(!"Name adi boshdur");
//	}
//}
//void CarGallery::SetCars(Car**& cars, ushort count)
//{
//	_cars = new Car * [count];
//	for (size_t i = 0; i < count; i++)
//		_cars[i] = new Car(cars[i]->GetMake(), cars[i]->GetModel(), cars[i]->GetColor(), cars[i]->GetYear(), cars[i]->GetEngine());
//
//	_count = count;
//}
//
//
//CarGallery::CarGallery(const char* name)
//{
//	SetName(name);
//	_cars = NULL;
//	_count = 0;
//}
//CarGallery::CarGallery(const char* name, Car**& cars, ushort count)
//{
//	SetName(name);
//	SetCars(cars, count);
//}
//
//
//const char* CarGallery::GetName() { return _name; }
//Car** CarGallery::GetCars() { return _cars; }
//int CarGallery::GetCount() { return _count; }
//
//
//
//
//
//void CarGallery::Clear()
//{
//	for (size_t i = 0; i < _count; i++)
//		delete _cars[i];
//	delete[] _cars;
//	_cars = NULL;
//	_count = 0;
//}
//void CarGallery::Pop()
//{
//	delete _cars[_count - 1];
//
//	Car** newCars = new Car * [--_count];
//	for (size_t i = 0; i < _count; i++)
//		newCars[i] = _cars[i];
//
//	delete[] _cars;
//	_cars = newCars;
//
//}
//void CarGallery::Append(Car* car)
//{
//	Car** newCars = new Car * [_count + 1];
//	for (size_t i = 0; i < _count; i++)
//		newCars[i] = _cars[i];
//
//	newCars[_count] = car;
//
//	delete[] _cars;
//	_cars = newCars;
//	_count++;
//
//}
//
//void CarGallery::DeleteById(int id)
//{
//	int findIndex = -1;
//	for (size_t i = 0; i < _count; i++)
//	{
//		if (id == _cars[i]->GetId())
//		{
//			findIndex = i;
//			break;
//		}
//	}
//
//	if (findIndex != -1)
//	{
//		delete _cars[findIndex];
//
//		Car** newCars = new Car * [_count - 1];
//		for (size_t i = 0; i < findIndex; i++)
//			newCars[i] = _cars[i];
//
//		for (size_t i = findIndex + 1; i < _count; i++)
//			newCars[i - 1] = _cars[i];
//
//		delete[] _cars;
//		_cars = newCars;
//		--_count;
//	}
//	else
//	{
//		assert(!"Verilmish id-li element movcut deyil");
//	}
//}
//
//const Car* CarGallery::GetElementById(int id)
//{
//	for (size_t i = 0; i < _count; i++)
//	{
//		if (id == _cars[i]->GetId())
//		{
//			return _cars[i];
//		}
//	}
//
//	return NULL;
//}
//
//
//void CarGallery::Show()
//{
//	cout << "Gallery Info" << endl;
//	cout << " ================================= " << endl;
//	cout << "Name: " << this->_name << endl;
//	cout << " ================================= " << endl;
//
//	cout << "All Cars" << endl;
//	for (size_t i = 0; i < _count; i++)
//		_cars[i]->Show();
//}
//
//
//CarGallery::~CarGallery()
//{
//	delete[] _name;
//
//	if (_cars != NULL)
//		this->Clear();
//}
//
//
//
//int main()
//{
//	Car c1("BMW", "X1", Colors::Green, 2015, 3.0);
//	Car c2("Mercedes", "w210", Colors::Black, 2015, 3.0);
//
//	cin >> c1;
//	cout << c1;
//
//
//
//
//}
