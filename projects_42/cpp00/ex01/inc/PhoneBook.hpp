/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucas <lpires-n@student.42sp.org.br>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 21:54:08 by lucas             #+#    #+#             */
/*   Updated: 2023/05/08 23:47:35 by lucas            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#define MAX_CONTACTS 8

class PhoneBook
{
    public:
        PhoneBook(void);
        ~PhoneBook(void);

        void addContact(void);
        void searchContact(void);

        void phoneBookHeader(void);
        void phoneBookMenu(void);

        bool isLooping;

    private:
        int _contacts_i;

        Contact _contacts[MAX_CONTACTS];

        void _printContactInfo(int index);
        void _tableHeader(void);
        void _tableBody(void);
        bool _setInfo(std::string &info, bool (*valid)(std::string));
};

#endif
