/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: vtenneke <vtenneke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/10 16:54:08 by vtenneke      #+#    #+#                 */
/*   Updated: 2020/08/10 16:54:08 by vtenneke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

struct Data {
	std::string	s1;
	int			n;
	std::string	s2;
};

void	*serialize(void) {
	struct Data		*serializedData = new struct Data();
	std::string	random = "0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	for (int i = 0; i < 8; i++)
		serializedData->s1 += random[std::rand() % 62];
	serializedData->n += std::rand();
	for (int i = 0; i < 8; i++)
		serializedData->s2 += random[std::rand() % 62];
	std::cout << serializedData->s1 << std::endl;
	return reinterpret_cast<void*>(serializedData);
}

Data	*deserialize(void *raw) {
	struct Data *deserializedData = new struct Data();
	*deserializedData = *reinterpret_cast<struct Data *>(raw);
	return (deserializedData);
}

int main() {
	std::srand(time(NULL));
	void *raw = serialize();
	struct Data *deserializedData = deserialize(raw);
	std::cout << deserializedData->s1 << std::endl;
	return (0);
}
