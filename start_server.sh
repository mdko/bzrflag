#./bin/bzrflag --world-size=800 --world=maps/pacman.bzw --occgrid-width=100 --default-true-positive=.97 --default-true-negative=.9 --no-report-obstacles --red-port=50100 --green-port=50102 --seed=1 --red-tanks=2 --green-tanks=0 --purple-tanks=0 --blue-tanks=0 $@ &
#sleep 2

./bin/bzrflag --world-size=400 --world=maps/empty.bzw --default-posnoise=5 --red-port=50100 --green-port=50101 --seed=1 --red-tanks=1 --green-tanks=1 $@ &
sleep 2
