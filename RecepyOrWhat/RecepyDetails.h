//
//  RecepyDetails.h
//  RecepyOrWhat
//
//  Created by Gabriela Angelova on 11/9/14.
//  Copyright (c) 2014 telerik. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class RecepyBasicInfo;

@interface RecepyDetails : NSManagedObject

@property(nonatomic, strong) NSString *recepyDescription;
@property(nonatomic, strong) NSString *region;
@property(nonatomic, strong) RecepyBasicInfo *info;
//how to store images in the data base

@end
