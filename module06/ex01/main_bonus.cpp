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
	Data() {};
	Data(Data *raw) : s1(raw->s1), n(raw->n), s2(raw->s2) {};
	Data(std::string s1, int n, std::string s2) : s1(s1), n(n), s2(s2) {};
};

template<int size>
std::string randStr()
{
    char str[size];

    for (int i = 0; i < size; i++)
        while (!isalnum(str[i] = rand() % 127)) {}
    return (std::string(str, size));
}

void	*serialize(void) {
	return (new struct Data(randStr<8>(), std::rand(), randStr<8>()));
}

Data	*deserialize(void *raw) {
	return (new struct Data(reinterpret_cast<struct Data *>(raw)));
}

int    main(void)
{
    struct Data *deserialized;
    std::srand(time(NULL));
    for (unsigned int i = 0; i < 20; i++)
    {
        std::cout << "[" << i << "] Serialized data result:" << std::endl;
        void *data = serialize();
        deserialized = deserialize(data);
        std::cout << deserialized->s1 << std::endl;
        std::cout << deserialized->n << std::endl;
        std::cout << deserialized->s2 << std::endl;
        delete [] reinterpret_cast<char *>(data);
        delete deserialized;
    }
    return (0);
}
