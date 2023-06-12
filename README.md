# New Age Grocery Store

This is a C++ project for the Object-Oriented Programming (CS-1004) course. The project is an object-oriented software for a large grocery store company that is revamping their business and moving from manual to automated processes and management. The company has branches all over Pakistan and the software aims to improve customers' shopping experience, both in person and virtually.

## Features
- Registration: Registration details are stored in three separate files - admin, manager, and customer. These files contain user details. A new customer can register into the system by providing a valid 13-digit CNIC. The password must be 9 characters long and must contain at least one uppercase letter and one numeric digit. The customer is asked to re-enter the password to check for any typing mistakes. A new manager can only be registered by the admin and a store should be assigned to that manager by the admin based on location.
- Login: Admin, manager, and customer can log in to the system with predefined usernames and passwords. Proper error messages are displayed if wrong credentials are entered.
- Home Screen & Sub Menus: Different home screens are displayed to every kind of user after they have logged into the system. Proper menus are displayed.
- Manage Stores and Users: This module is only available to admins of the system. The admin manages the records of all stores open in the country. Additionally, store managers cannot register with the system themselves; they must be added to the system by an admin.

## Note
This project uses concepts such as classes, inheritance, polymorphism, encapsulation, abstraction, file handling, and dynamic memory allocation that were taught in the course.
