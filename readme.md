## EX03

### What are the benefits of using a constant reference to a std::string instead of just returning a std::string by value?
```cpp
std::string const	&getType(void);
```

Consider the following example where the getType method is used:

``` cpp
Weapon myWeapon("Sword");
std::string const &weaponType = myWeapon.getType();
std::cout << "Weapon type: " << weaponType << std::endl;
```

In this example:

``myWeapon.getType()`` returns a reference to the ``_type`` member variable.
The reference ``weaponType`` is used to print the weapon type without copying the string.
By using a ``const std::string&``, you ensure efficient and safe access to the internal string without unnecessary copying or risk of modification.

### Why in class HumanA the weapon is a reference, and in class HumanB the weapon is a pointer?

````cpp
class HumanA {
    private:
        std::string _name;
        Weapon &_weapon;
    public:
        HumanA(std::string name, Weapon &weapon);
        ~HumanA(void);
        void attack(void);
};
````
The ``HumanA`` class requires a weapon to be provided at the time of its creation and assumes that the weapon will always be available and valid throughout the lifetime of the ``HumanA`` object.`
The reference ``_weapon`` must be initialized in the constructor and cannot be changed later. This ensures that ``HumanA`` always has a valid weapon to use. Using a reference in HumanA ensures that the object always has a valid weapon because references in C++ must be initialized when they are declared and cannot be null.

```cpp
class HumanB {
    private:
        std::string _name;
        Weapon *_weapon;
    public:
        HumanB(std::string name);
        ~HumanB(void);
        void attack(void);
        void setWeapon(Weapon &weapon);
};
```

The ``HumanB`` class allows for more flexibility. It can be created without a weapon and can have its weapon set or changed later using the ``setWeapon`` method.
The pointer ``_weapon`` can be ``NULL`` (or nullptr in modern C++), indicating that ``HumanB`` might not have a weapon at some point. This requires additional checks (e.g., in the ``attack`` method) to ensure the weapon is valid before using it.