//
//  NSDictionary+MultipleItems.h
//  JonnyFoundation
//
//  Created by wxn on 2016/10/14.
//  Copyright © 2016年 cn.ioslearner. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSDictionary (MultipleItems)

/**
 * Return the first item of array for the specificed key.
 *
 * -[NSDictionary objectForKey:] will return an object or an array depending on
 * how the NSDictionary is created.
 */
- (id)itemForKey:(id)aKey;

/**
 * Return a NSArray object which contains all the items for specificed key.
 *
 * -[NSDictionary objectForKey:] will return an object or an array depending on
 * how the NSDictionary is created.
 */
- (NSArray *)allItemsForKey:(id)aKey;
@end
