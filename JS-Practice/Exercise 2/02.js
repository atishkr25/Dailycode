
var ans = function(nums, target){
    let map = {};
    for(i in nums) {
        let x = nums[i];
        let compliment = target - x; // tr = 10,x=3,com=7
        if(map[compliment] != undefined)
        {
            return [parseInt(map[compliment]), parseInt(i)];
        }
        map[x] = i;
    }
    return [];
};

console.log(ans([1, 0, 2, 4, 6, 12], 6));