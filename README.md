## Arduino-Project-Repo
# Електронен ключ 
### Ключова система с 4x4 keypad като input, серво мотор, което отлкючва врата*, и LCD като дисплей на който изписва необходимата информация.


![Softuni keypad project](https://github.com/captainMony/Arduino-Project-Repo/assets/140430060/b6ce13a1-40c1-49b5-8b8d-18cb33af3972)

![image](https://github.com/captainMony/Arduino-Project-Repo/assets/140430060/96df5b31-032b-46f7-adc1-aef3c20aa860)



## Как работи проекта:
При стартирането на проекта на LCD-то ще испише "Enter passcode:". С пада се въвежда входиня код и с кликането на '#' се "изпраща" кода да се провери. Ако входния код не съвпада с зададенйя коректен код ще испише "Access Denied  " и няма да се завърти сервото("да се отвори вратата").А ако е зададен корекния код ще испише "Access Granted " и сервото ще се завърти и ще седи 10 секунди в "отвордена" позиция. След което ще се върне в началната си позиция и ще поиска за код отново. Ако въведения код смятате, че е грешен може с "*" клавиш да изчисите въведеното от вас входен код.


# Използвани компоненти и как те рабоят:

## --------4x4 Keypad
![image](https://github.com/captainMony/Arduino-Project-Repo/assets/140430060/753904d6-8760-49d3-8ff6-4667caecaa5f)

{


}

### Pinout 
![image](https://github.com/captainMony/Arduino-Project-Repo/assets/140430060/77cd57af-7702-475a-9b14-66556e8b4150)




## --------Servo motor
![image](https://github.com/captainMony/Arduino-Project-Repo/assets/140430060/b7641e4b-7967-488d-97dc-bab8cfbb4a22)

{



}


## --------"Standard" LCD 16x2

![image](https://github.com/captainMony/Arduino-Project-Repo/assets/140430060/fbe43695-fa91-42c9-a0a2-d122ce949488)


![image](https://github.com/captainMony/Arduino-Project-Repo/assets/140430060/1a01b0c0-8a07-42c8-ba87-6ded008a9da2)


![image](https://github.com/captainMony/Arduino-Project-Repo/assets/140430060/0f7dcccd-9765-4a18-bf58-e5890c37510a)


{



}


## -------- Potentiomiter:

![image](https://github.com/captainMony/Arduino-Project-Repo/assets/140430060/46d40dfa-cd8a-49c1-8124-ffcc3e052da1)

{


}

## Всичко е свързано с Arduino Uno
![image](https://github.com/captainMony/Arduino-Project-Repo/assets/140430060/fb554b56-ec6e-4e48-9f3b-412ca0301cc3)

{


}






