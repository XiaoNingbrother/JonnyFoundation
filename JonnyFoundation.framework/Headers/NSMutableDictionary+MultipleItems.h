//
//  NSMutableDictionary+MultipleItems.h
//  JonnyFoundation
//
//  Created by wxn on 2016/10/14.
//  Copyright © 2016年 cn.ioslearner. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSMutableDictionary (MultipleItems)
/**
 * Add an item to the array for the specificed key.
 */
- (void)addItem:(id)item forKey:(id<NSCopying>)aKey;

@end
