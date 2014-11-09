//
//  RecepyBasicInfo.h
//  RecepyOrWhat
//
//  Created by Gabriela Angelova on 11/9/14.
//  Copyright (c) 2014 telerik. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class RecepyDetails;

@interface RecepyBasicInfo : NSManagedObject

@property (nonatomic, strong) NSString *title;
@property (nonatomic, strong) NSNumber *preparationTime;
@property (nonatomic, strong) RecepyDetails *details;

@end
