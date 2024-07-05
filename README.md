## Arduino-Project-Repo
# Електронен ключ 
### Ключова система с 4x4 keypad като input, серво мотор, което отлкючва врата*, и LCD като дисплей на който изписва необходимата информация.

![Copy of Powerful Gaaris-Hango (1)](https://github.com/captainMony/Arduino-Project-Repo/assets/140430060/b70845be-ac91-4799-852f-3e2d804c6608)

![image](https://github.com/captainMony/Arduino-Project-Repo/assets/140430060/80714ef2-6304-453d-a9ab-4902d16fb31e)


## Как работи:
При стартирането на проекта на LCD-то ще испише "Enter passcode:". С пада се въвежда входиня код и с кликането на '#' се "изпраща" кода да се провери. Ако входния код не съвпада с зададенйя коректен код ще испише "Access Denied  " и няма да се завърти сервото("да се отвори вратата").А ако е зададен корекния код ще испише "Access Granted " и сервото ще се завърти и ще седи 10 секунди в "отвордена" позиция. След което ще се върне в началната си позиция и ще поиска за код отново. Ако въведения код смятате, че е грешен може с "*" клавиш да изчисите въведеното от вас входен код.


# Използвани компоненти и как те рабоят:

## 4x4 Keypad
![image](https://github.com/captainMony/Arduino-Project-Repo/assets/140430060/753904d6-8760-49d3-8ff6-4667caecaa5f)

Това е мрежа* от мембранни ключове 

### Pinout 

![image](https://github.com/captainMony/Arduino-Project-Repo/assets/140430060/77cd57af-7702-475a-9b14-66556e8b4150)




## Servo motor
![image](https://github.com/captainMony/Arduino-Project-Repo/assets/140430060/b7641e4b-7967-488d-97dc-bab8cfbb4a22)








## "Standard" LCD 16x2

![image](https://github.com/captainMony/Arduino-Project-Repo/assets/140430060/fbe43695-fa91-42c9-a0a2-d122ce949488)


GND – заземяване 
VCC – +5V захранване 
V0 – контраст на буквите 
RS – Избиране на регисер 
R/W – избиране на режим да работа. Дали да чете, или записва
Е – „активираne“ записването към пиновете за данни и регистрите
D0 до D7- Пинове за данни
А – анода на подсвета 
К- катода на подсвета




![image](https://github.com/captainMony/Arduino-Project-Repo/assets/140430060/1a01b0c0-8a07-42c8-ba87-6ded008a9da2)


![image](https://github.com/captainMony/Arduino-Project-Repo/assets/140430060/0f7dcccd-9765-4a18-bf58-e5890c37510a)

## Potentiomiter:


## All connected onto a Arduino Uno
![image](https://github.com/captainMony/Arduino-Project-Repo/assets/140430060/fb554b56-ec6e-4e48-9f3b-412ca0301cc3)






