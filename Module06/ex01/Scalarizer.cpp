

#include "Scalarizer.hpp"

size_t Scalarizer::serialize(Data* ptr) {
	return reinterpret_cast<size_t>(ptr);
}

Data* Scalarizer::deserialize(size_t raw) {
	return reinterpret_cast<Data*>(raw);
}
