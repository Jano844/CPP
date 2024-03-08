

#include "Scalarizer.hpp"

int main()
{
	Data *data = new Data("Jan", 2004);

	size_t serialized = Scalarizer::serialize(data);
	std::cout << "Serialized: " << serialized << std::endl;
	std::cout << "Deserialized: " << Scalarizer::deserialize(serialized)->getName() << std::endl;
	std::cout << "Deserialized: " << Scalarizer::deserialize(serialized)->getBirthyear() << std::endl;
	data->setBirthday(1999);
	data->setName("HelloWorld");
	std::cout << "Deserialized: " << Scalarizer::deserialize(serialized)->getName() << std::endl;
	std::cout << "Deserialized: " << Scalarizer::deserialize(serialized)->getBirthyear() << std::endl;


	delete data;
	return 0;
}
