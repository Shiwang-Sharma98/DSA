// sort on the basis of start time and end time
// make two arrays one of start time [st] and one of end time[et] (sorted in increasing order)
// now keep one pointer i on st[0] and a pointer j on et[0]
// now iteratre on them if one meeting starts it will need one room 
// and if the seacond meeting starts and the first is still going on then two room will be needed
// this way increase i and j and mintain a variable of rooms