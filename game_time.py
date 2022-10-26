import random
import time

exp = 0
max_exp = 10
lvl = 1
x = 3
y = 3
_class = ''
z = 1
w = 1
t = 0
basic = 0
rare = 0
boss = 0
leg_boss = 0
print(f'Your lvl: {int(lvl)} ({int(exp)}/{int(max_exp)})')
while 1:
    time1 = t
    if lvl < 2:
        t *= 2
    exp += t / 24 / 3600 * (1 + random.random()) * lvl
    if exp > max_exp:
        print('\n----------------------------------')
        print('Congratulation!')
        exp -= max_exp
        max_exp *= 2
        lvl += 1
        print('----------------------------------')
        print('\n' * 2)
        time.sleep(0.6)
    if lvl == 5:
        com = input('\nPrint your class (1 - warrior or 2 - wizard): ')
        if com == 'JnfsOw920_LVL+':
            t = int(input())
            lvl += t
            x = 100
            y = 100
            z = 100
            w = 100
            max_exp = lvl * 10
            _class = '\nYour class: GOD'
        elif com == '1':
            x = 3
            y = 10
            _class = '\nYour class: warrior'
            z = 2
            w = 0.5
        elif com == '2':
            x = 25
            y = 1
            z = 0.1
            w = 3
            _class = '\nYour class: wizard'
        else:
            x = 0.1
            y = 0.1
            z = 0.01
            w = 0.01
            _class = '\nYour class: animeshnik'

    print('\n' * 10)
    print('-' * 42 + ' ' * 150 + f'time: {t / 24 / 3600:.6f}')
    print(f'Your lvl: {int(lvl)} ({exp:.6f}/{int(max_exp)})  +{t / 24 / 3600:.6f}' + _class)
    print(f'HP: {int(lvl * 10 * z)}/{int(lvl * 10 * z)}')
    print(f'MP: {int(lvl * 10 * w)}/{int(lvl * 10 * w)}')
    print(f'Attack: {1.21 ** lvl * x:.1f}')
    print(f'Protection: {1.22 ** lvl * y:.1f}')
    print(f'kills: basic-{basic}, rare-{rare}, Boss-{boss}, legendary boss-{leg_boss}')
    print('[' + '#' * int((exp / max_exp) * 40) + '-' * (40 - int(exp / max_exp * 40)) + ']')
    t = random.random() * 10 + random.randint(0, 1) * random.randint(0, 1) * random.random() * 100 + random.randint(
        0, 1) * \
        random.randint(0, 1) * random.randint(0, 1) * random.randint(0, 1) * random.randint(0, 1) * random.randint(
        0, 1) \
        * random.randint(0, 1) * random.random() * 1000 + random.randint(0, 1) * random.randint(0, 1) *\
        random.randint(0, 1) * random.randint(0, 1) * random.randint(0, 1) * random.randint(0, 1) * \
        random.randint(0, 1) * random.randint(0, 1) * random.randint(0, 1) * random.randint(0, 1) * \
        random.randint(0, 1) * random.random() * 48 * 3600
    if t <= 10:
        print('Enemy: Basic', end='')
        basic += 1
    elif t <= 110:
        print('Enemy: Rare', end='')
        rare += 1
    elif t <= 1110:
        print('Enemy: Boss', end='')
        boss += 1
    else:
        print('Enemy: Legendary BOSS!!!', end='')
        leg_boss += 1
    time.sleep(t)
