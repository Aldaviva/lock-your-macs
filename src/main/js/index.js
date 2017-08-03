var maclock = require('../../../target/maclock.node');

/**
 * @return Boolean true if Mac OS is currently locked, and false if Mac OS is unlocked
 */
module.exports.isLocked = function(){
    return maclock.isLocked();
};
