--    description,
--    unit ENUM('day','week','month','year') DEFAULT NULL,
--    unitsperissue INTEGER, DEFAULT '1',
--    issuesperunit INTEGER, DEFAULT '1',
--    displayorder INT,

INSERT INTO subscription_frequencies
 (displayorder, description,           unit,   unitsperissue, issuesperunit) VALUES
 (1,           '2 рази на день',      'day',   1, 2),
 (2,           'Кожного дня',         'day',   1, 1),
 (3,           '3 рази на тиждень',   'week',  1, 3),
 (4,           '2 рази на тиждень',   'week',  1, 2),
 (5,           'Кожного тижня',       'week',  1, 1),
 (6,           '1 раз на 2 тижні',    'week',  2, 1),
 (7,           '1 раз на 3 тижні',    'week',  3, 1),
 (8,           '3 рази в місяць',     'month', 1, 3),
 (9,           'Кожного місяця',      'month', 1, 1),
 (10,          '1 раз на 2 місяці',   'month', 2, 1),
 (11,          '1 раз на 3 місяці',   'month', 3, 1),
 (12,          '2 рази на рік',       'month', 6, 1),
 (13,          '2 рази в місяць',     'month', 1, 2),
 (14,          '1 раз на 4 місяці',   'month', 4, 1),
 (15,          '1 раз на 6 місцяів',  'month', 6, 1),
 (16,          'Кожного року',        'year',  1, 1),
 (17,          '1 раз на 2 роки',     'year',  2, 1),
 (18,          '10 разів на рік',     'year',  1, 10),
 (19,          '8 разів на рік',      'year',  1, 8),
 (20,          '7 разів на рік',      'year',  1, 7),
 (21,          '5 разів на рік',      'year',  1, 5),
 (22,          '1 ogni 3 anni',       'year',  3, 1),
 (23,          '9 разів на рік',      'year',  1, 9),
 (24,          '11 разів на рік',     'year',  1, 11),
 (25,          'Нерегулярно',          NULL,   1, 1),
 (26,          'Безперервне оновлення',NULL,   1, 1);