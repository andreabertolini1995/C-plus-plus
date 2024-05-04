#ifndef CONTACT_HPP
# define CONTACT_HPP

class Contact {
    private:
        std::string firstName;
        std::string lastName;
        std::string nickName;
        std::string phoneNumber;
        std::string darkestSecret;
    
    public:
        Contact();
        ~Contact();
        void setFirstName(std::string firstName);
        void setLastName(std::string lastName);
        void setNickName(std::string nickName);
        void setPhoneNumber(std::string phoneNumber);
        void setDarkestSecret(std::string darkestSecret);
        // std::string getFirstname();
        // std::string getFirstname();
        // std::string getNickName();
        // std::string getPhoneNumber();
        // std::string getDarkestSecret();
        bool isValidContact();
};

#endif

