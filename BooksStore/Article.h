//
//  Article.h
//  BooksStore
//
//  Created by meng ling on 11-12-4.
//  Copyright (c) 2011年 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>


@interface Article : NSManagedObject

@property (nonatomic, retain) NSString * ContentBgImage;
@property (nonatomic, retain) NSString * FirstSmallImage;
@property (nonatomic, retain) NSNumber * Id;
@property (nonatomic, retain) NSString * KeyWords;
@property (nonatomic, retain) NSString * MagazineId;
@property (nonatomic, retain) UNKNOWN_TYPE SortNum;

@end