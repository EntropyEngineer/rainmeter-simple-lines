# Скин для Rainmeter - "Простые линии"

## Содержит следующие компоненты:
- Цифровые часы
- Карта планеты
    - часы
    - дата / время
    - терминатор
    - положение МКС
    - точка геолокации (определяется вручную)
    - обычный / полноэкранный режимы
- Календарь
- Погода из сервиса Яндекс.Погода
- Накопители информации
- Системные ресурсы
- Сетевой трафик

<img src="/images/skin_map_fullscreen.jpg" width="30%">
<img src="/images/skin_map.jpg" width="30%">
<img src="/images/skin_others.jpg" width="30%">

## Настройка:
Для настройки необходимо отредактировать файл Settings.inc

Для замены цветов на более подходящие к вашему фоновому изображению необходимо редактировать Styles.inc

### Используемые плагины:
- JsonParser https://github.com/e2e8/rainmeter-jsonparser

### Используемые сервисы и api:
- Определение позиции МКС http://api.open-notify.org
- Парсинг погодных данных https://yandex.ru/pogoda/

### Частично использован код:
- Регулярное выражение парсера погоды от Eclectic Tech https://forum.rainmeter.net/viewtopic.php?t=43064
- Код генератора элементов от Eclectic Tech https://forum.rainmeter.net/viewtopic.php?t=35180
- Скрипт расчёта терминатора (портирован с js) от Martin Matysiak https://github.com/marmat/google-maps-api-addons

### Использованы шрифты:
- Rubik Light - от Hubert and Fischer https://fonts.google.com/specimen/Rubik+Mono+One
- Rubkik Light Mod - моя модификация с более тонким начертанием
- Andantino script - от Gophmann A.L https://fonts-online.ru/fonts/andantino-script

### Другое:
- Использованы визуальный стиль и изображения карты планеты скина "Sonder" https://github.com/mpurses/Sonder
- Источник фонового изображения: https://akspic.ru/image/174651-lesnoj_arhetip-les-gde_les_vstrechaetsya_so_zvezdami-derevo-rastenie

### Отличия от скина "Sonder":
- собственная кодовая база
- собственные графические ресурсы (за исключением изображения карты)
- меньше виджетов и их вариаций
- нет визуального конфигуратора
- нет гугл трекера
- нет определителя геолокации
- используются шрифты с поддержкой кириллицы
- используется погодный сервис яндекс, виджет погоды целиком совместим с его погодными данными
- линия терминатора рассчитывается математически
- только русская локализация

## История версий:
### 1.0
- Релиз