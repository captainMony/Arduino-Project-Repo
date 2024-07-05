# Arduino-Project-Repo
Електронен ключ 
Ключова система с 4x4 keypad като input, серво мотор, което отлкючва врата*, и LCD като дисплей на който изписва необходимата информация.


![Copy of Powerful Gaaris-Hango](https://github.com/captainMony/Arduino-Project-Repo/assets/140430060/9e6ee2fe-24d7-474d-a2ed-79ad8451d3a4)

Как работи:
При стартирането на проекта на LCD-то ще испише "Enter passcode:". С пада се въвежда входиня код и с кликането на '#' се "изпраща" кода да се провери. Ако входния код не съвпада с зададенйя коректен код ще испише "Access Denied  " и няма да се завърти сервото("да се отвори вратата").А ако е зададен корекния код ще испише "Access Granted " и сервото ще се завърти и ще седи 10 секунди в "отвордена" позиция. След което ще се върне в началната си позиция и ще поиска за код отново. Ако въведения код смятате, че е грешен може с "*" клавиш да изчисите въведеното от вас входен код.


Как работи кода: 



Използвани компоненти:
4x4 Keypad
![image](https://github.com/captainMony/Arduino-Project-Repo/assets/140430060/753904d6-8760-49d3-8ff6-4667caecaa5f)
Servo motor 
![image](https://github.com/captainMony/Arduino-Project-Repo/assets/140430060/b7641e4b-7967-488d-97dc-bab8cfbb4a22)
"Standard" LCD 
![image](https://github.com/captainMony/Arduino-Project-Repo/assets/140430060/0f7dcccd-9765-4a18-bf58-e5890c37510a)
All connected onto a Arduino Uno
![image](https://github.com/captainMony/Arduino-Project-Repo/assets/140430060/fb554b56-ec6e-4e48-9f3b-412ca0301cc3)





