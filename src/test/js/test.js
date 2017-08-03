var assert = require('assert');

var lockMacOS = require('../../main/js');

describe('lock-your-macs', function(){
    describe('isLocked', function(){
        it('returns false when unlocked', function(){
            var actual = lockMacOS.isLocked();
            var expected = false;
            assert.equal(actual, expected, "isLocked should return false when Mac OS is unlocked (which I'm assuming it is right now)");
        });
    });
});