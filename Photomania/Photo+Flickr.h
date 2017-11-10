//
//  Photo+Flickr.h
//  Photomania
//
//  Created by Tarik Djebien on 17/05/13.
//  Copyright (c) 2013 __MyCompanyName__. All rights reserved.
//

#import "Photo.h"

@interface Photo (Flickr)

+ (Photo *) photoWithFlickrInfo:(NSDictionary *)flickrInfo
         inManagedObjectContext:(NSManagedObjectContext *) context;

@end
