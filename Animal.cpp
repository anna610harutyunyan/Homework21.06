#include <iostream>
#include <string>

class Animal
{
protected:
	int* array = new int[5];
	std::string sound;
	std::string spcie;
	std::string name;
	std::string type_of_food;
	std::string gender;
	std::string movement_type;
	std::string respiratory_system;
	std::string breathing_system;
	int age;
	int speed;
	int lifespan;
	int weight;
	int feet;
	int teeth;
public:
	Animal()
	{
		std::cout << __func__ << std::endl;
	}
	virtual void voice() = 0;
	virtual void movement() = 0;
	Animal(const Animal& other)
	{
		this-> sound=other.sound;
		this-> spcie=other.spcie;
		this-> name=other.name;
		this-> type_of_food=other.type_of_food;
		this->gender=other.gender;
		this-> movement_type=other.movement_type;
		this-> respiratory_system=other.respiratory_system;
		this-> breathing_system=other.breathing_system;
		this-> age=other.age;
		this-> speed=other.age;
		this-> lifespan=other.lifespan;
		this-> weight=other.weight;
		this-> feet=other.feet;
		this-> teeth=other.teeth;
		this->array = new int[5];
		std::copy(other.array, other.array + 5, this->array);
	}
	Animal& operator =(const Animal& other)
	{
		if (this == &other)
		{
			return *this;
		}

		this->sound = other.sound;
		this->spcie = other.spcie;
		this->name = other.name;
		this->type_of_food = other.type_of_food;
		this->gender = other.gender;
		this->movement_type = other.movement_type;
		this->respiratory_system = other.respiratory_system;
		this->breathing_system = other.breathing_system;
		this->age = other.age;
		this->speed = other.age;
		this->lifespan = other.lifespan;
		this->weight = other.weight;
		this->feet = other.feet;
		this->teeth = other.teeth;
		delete[] this->array;
		this->array = new int[5];
		std::copy(other.array, other.array + 5, this->array);

		return *this;


	}
	
	 virtual ~Animal()
	{
		delete [] array;
		std::cout << __func__  <<std::endl;
	}
};

class Aquatic_animals:public Animal
{
protected:
	int fins_count;
	int depth_of_living;
	int gills_count;
	std::string habitat; //type of water
public:
	Aquatic_animals()
	{
		std::cout << __func__ << std::endl;
	}
	Aquatic_animals(const Aquatic_animals& other)
	{
		this->fins_count = other.fins_count;
		this->depth_of_living = other.depth_of_living;
		this->gills_count = other.gills_count;
		this->habitat = other.habitat;
		this-> array = new int[5];
		std::copy(other.array, other.array + 5, this->array);
	}
	Aquatic_animals& operator =(const Aquatic_animals& other)
	{
		if (this == &other)
		{
			return *this;
		}

		this->fins_count = other.fins_count;
		this->depth_of_living = other.depth_of_living;
		this->gills_count = other.gills_count;
		this->habitat = other.habitat;
		delete [] this->array;
		this->array = new int[5];
		std::copy(other.array, other.array + 5, this->array);
		Animal::operator=(other);

		return *this;
	}
	virtual void voice() = 0;
	
	virtual void movement() = 0;
	
	virtual ~Aquatic_animals()
	{
		delete[] array;
		std::cout << __func__ << std::endl;
	}
};
class Terrestrial_animals :public Animal
{

protected:
	int ears;
	std::string cattle_type;
	std::string thermoregulation_behavior;
public:

	Terrestrial_animals()
	{
		std::cout << __func__ << std::endl;
	}
	Terrestrial_animals(const Terrestrial_animals& other)
	{
		this->ears = other.ears;
		this->cattle_type = other.cattle_type;
		this->thermoregulation_behavior = other.thermoregulation_behavior;
		this->array = new int[5];
		std::copy(other.array, other.array + 5, this->array);
	}

	Terrestrial_animals& operator =(const Terrestrial_animals& other)
	{
		if (this == &other)
		{
			return *this;
		}

		this->ears = other.ears;
		this->cattle_type = other.cattle_type;
		this->thermoregulation_behavior = other.thermoregulation_behavior;
		delete[] this->array;
		this->array = new int[5];
		std::copy(other.array, other.array + 5, this->array);
		Animal::operator=(other);

		return *this;
	}

	
	void voice() = 0;
	
	void movement() = 0;
	
	virtual ~Terrestrial_animals()
	{
		delete[]array;
		std::cout << __func__ << std::endl;
	}
};
class Birds :public Animal
{
protected:
	std::string feathers_type;
	int beak_length;
	int visual_distance;
	int wing_flapping_speed;
	int flight_distance; //per day
public:
	Birds()
	{
		std::cout << __func__ << std::endl;
	}
	
	Birds(const Birds& other)
	{
		this->beak_length = other.beak_length;
		this->feathers_type = other.feathers_type;
		this->visual_distance = other.visual_distance;
		this->wing_flapping_speed = other.wing_flapping_speed;
		this->flight_distance = other.flight_distance;
		this->array = new int[5];
		std::copy(other.array, other.array + 5, this->array);
	}
	Birds& operator =(const Birds& other)
	{
		if (this == &other)
		{
			return *this;
		}

		this->beak_length = other.beak_length;
		this->feathers_type = other.feathers_type;
		this->visual_distance = other.visual_distance;
		this->wing_flapping_speed = other.wing_flapping_speed;
		this->flight_distance = other.flight_distance;
		delete[] this->array;
		this->array = new int[5];
		std::copy(other.array, other.array + 5, this->array);
		Animal::operator=(other);

		return *this;
	}
	void voice()  = 0;
	
	void movement() = 0;
	
	virtual ~Birds()
	{
		delete[] array;
		std::cout << __func__ << std::endl;
	}
};
class Seahorse :public Aquatic_animals
{
	int tail_durability;
	double persentage_of_medicine_use;
	std::string colour;
public:
	Seahorse()
	{
		std::cout << __func__ << std::endl;
	}
	Seahorse(const Seahorse& other)
	{
		this->tail_durability = other.tail_durability;
		this->persentage_of_medicine_use = other.persentage_of_medicine_use;
		this->colour = other.colour;
		this->array = new int[5];
	    std::copy(other.array, other.array + 5, this->array);
	}

	Seahorse& operator =(const Seahorse& other)
	{
		if (this == &other)
		{
			return *this;
		}
		this->tail_durability = other.tail_durability;
		this->persentage_of_medicine_use = other.persentage_of_medicine_use;
		this->colour = other.colour;
		delete[] this->array;
		this->array = new int[5];
		std::copy(other.array, other.array + 5, this->array);
		Aquatic_animals::operator=(other);

		return *this;
	}
	void voice() override
	{
		std::cout << "Seahorses do not have a specific voice or vocalization \n";
	}
	void movement() override
	{
		std::cout << " Seahorses use a specialized form of locomotion known as oscillatory swimming \n";
	}
	~Seahorse()override
	{
		delete[] array;
		std::cout << __func__ << std::endl;
	}
};
class Shark :public Aquatic_animals
{
	int count_of_victims;
	int speed_of_tail_flapping;
public:
	Shark()
	{
		std::cout << __func__ << std::endl;
	}
	Shark(const Shark& other)
	{
		this->count_of_victims = other.count_of_victims;
		this->speed_of_tail_flapping = other.speed_of_tail_flapping;
		this->array = new int[5];
		std::copy(other.array, other.array + 5, this->array);

	}

	Shark& operator =(const Shark& other)
	{
		if (this == &other)
		{
			return *this;
		}

		this->count_of_victims = other.count_of_victims;
		this->speed_of_tail_flapping = other.speed_of_tail_flapping;
		delete[] this->array;
		this->array = new int[5];
		std::copy(other.array, other.array + 5, this->array);
		Aquatic_animals::operator=(other);

		return *this;
	}
	void voice() override
	{
		std::cout << "Certain types of sharks can produce low-frequency sounds by grinding their teeth together or by using specialized structures associated with their swim bladder \n";
	}
	void movement() override
	{
		std::cout << " Sharks exhibit a swimming style called undulatory swimming \n";
	}
	~Shark()override
	{
		delete[] array;
		std::cout << __func__ << std::endl;
	}
};

class Cow :public Terrestrial_animals
{
	int sourse_of_meat;
	int supply_of_milk;
public:
	Cow()
	{
		std::cout << __func__ << std::endl;
	}
	Cow(const Cow& other)
	{
		this->sourse_of_meat = other.sourse_of_meat;
		this->supply_of_milk = other.supply_of_milk;
		this->array = new int[5];
		std::copy(other.array, other.array + 5, this->array);
	}

	Cow& operator=(const Cow& other)
	{
		if (this == &other)
		{
			return *this;
		}

		this->sourse_of_meat = other.sourse_of_meat;
		this->supply_of_milk = other.supply_of_milk;
		delete[] this->array;
		this->array = new int[5];
		std::copy(other.array, other.array + 5, this->array);
		Terrestrial_animals::operator=(other);

		return *this;
	}
	void voice() override
	{
		std::cout << "Cows are mooing \n";
	}
	void movement() override
	{
		std::cout << " Primarily cows exhibit a walking or running form of movement \n";
	}
	~Cow()override
	{
		delete[] array;
		std::cout << __func__ << std::endl;
	}
};
class Dog :public Terrestrial_animals
{
public:
	bool is_vactinated()
	{
		return true;
	}
	bool is_human_friendly()
	{
		return true;
	}
public:
	Dog()
	{
		std::cout << __func__ << std::endl;

	}
	Dog(const Dog& other)
	{
		this->array=new int[5];
		std::copy(other.array, other.array + 5, this->array);
	}

	Dog& operator =(const Dog& other)
	{
		if (this == &other)
		{
			return *this;
		}

		Terrestrial_animals::operator=(other);
		delete[] this->array;
		this->array = new int[5];
		std::copy(other.array, other.array + 5, this->array);
		return *this;
	}
	
	void voice() override
	{
		std::cout << "Dogs are barking \n";
	}
	void movement() override
	{
		std::cout << " Primarily dogs exhibit a walking, running or trotting form of movement \n";
	}
	~Dog()override
	{
		delete[] array;
		std::cout << __func__ << std::endl;
	}
};

class Parrot :public Birds
{
public:
	bool can_talk()
	{
		return true;
	}
public:
	Parrot()
	{
		std::cout << __func__ << std::endl;
	}
	Parrot(const Parrot& other)
	{
		this->array = new int[5];
		std::copy(other.array, other.array + 5, this->array);
	}

	Parrot& operator =(const Parrot& other)
	{
		if (this == &other)
		{
			return *this;
		}

		Birds::operator=(other);
		delete[] this->array;
		this->array = new int[5];
		std::copy(other.array, other.array + 5, this->array);
		return *this;
	}
	void voice() override
	{
		std::cout << "Parrots have a wide range of vocalizations, including the ability to imitate human speech and various sounds from their environment \n";
	}
	void movement() override
	{
		std::cout << " Parrots are flying \n";
	}
	~Parrot ()override
	{
		delete[] array;
		std::cout << __func__ << std::endl;
	}
};

class Pigeon :public Birds
{
	std::string colour;

public:
	Pigeon()
	{
		std::cout << __func__ << std::endl;
	}
	Pigeon(const Pigeon& other)
	{
		this->colour = other.colour;
		this->array = new int[5];
		std::copy(other.array, other.array + 5, this->array);
	}
	Pigeon& operator =(const Pigeon& other)
	{
		if (this == &other)
		{
			return *this;
		}

		this->colour = other.colour;
		delete[] this->array;
		this->array = new int[5];
		std::copy(other.array, other.array + 5, this->array);
		Birds::operator=(other);
		return *this;

	}
	void voice() final
	{
		std::cout << "Pigeons are cooing  \n";
	}
	void movement() final
	{
		std::cout << " Pigeons are flying \n";
	}
	~Pigeon ()final 
	{
		delete[] array;
		std::cout << __func__ << std::endl;
	}
};

int main(int argc, char** argv)
{
	std::cout << "For the first obj  constractors are called with this priority \n";
	Seahorse anm;
	anm.voice();
	anm.movement();
	std::cout << "For the second obj  constractors are called with this priority \n";
	Shark anm1;
	anm1.voice();
	anm1.movement();
	std::cout << "For the third obj  constractors are called with this priority \n";
	Cow anm2;
	anm2.voice();
	anm2.movement();
	std::cout << "For the fourth obj  constractors are called with this priority \n";
	Dog anm3;
	anm3.voice();
	anm3.movement();
	std::cout << "For the fifth obj  constractors are called with this priority \n";
	Parrot anm4;
	anm4.voice();
	anm4.movement();
	std::cout << "For the sixth obj  constractors are called with this priority \n";
	Pigeon anm5;
	anm5.voice();
	anm5.movement();
	const int  count_animals = 6;
	Animal** animals = new Animal*[count_animals];
	animals[0] = new Seahorse();
	animals[1] = new Shark();
	animals[2] = new Cow();
	animals[3] = new Dog();
	animals[4] = new Parrot();
	animals[5] = new Pigeon();

	for (int i = 0; i < count_animals; ++i)
	{
		delete animals[i];
	}
	delete[] animals;
	animals == nullptr;


	return 0;
}
