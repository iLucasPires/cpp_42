/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucas <lpires-n@student.42sp.org.br>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 21:54:28 by lucas             #+#    #+#             */
/*   Updated: 2023/05/08 23:50:40 by lucas            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#define INFO_SIZE 5

enum
{
    FIRST_NAME,
    LAST_NAME,
    NICKNAME,
    PHONE_NUMBER,
    DARKEST_SECRET
};

class Contact
{
    public:
        Contact(void);
        ~Contact(void);

        std::string getInfo(int index);

        void setInfo(std::string info, int index);

        bool _isValid;

    private:
        bool _is_empty;
        bool _validName(std::string name);
        bool _validNickname(std::string nickname);
        bool _validPhoneNumber(std::string phone_number);

        std::string _info[INFO_SIZE];
};

#endif
