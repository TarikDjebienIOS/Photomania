//
//  Photographer+Create.h
//  Photomania
//
//  Created by Tarik Djebien on 17/05/13.
//  Copyright (c) 2013 __MyCompanyName__. All rights reserved.
//

#import "Photographer.h"

@interface Photographer (Create)

+ (Photographer *) photographerWithName:(NSString *)name
                inManagedObjectContext:(NSManagedObjectContext *) context;
@end
