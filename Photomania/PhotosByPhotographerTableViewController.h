//
//  PhotosByPhotographerTableViewController.h
//  Photomania
//
//  Created by Tarik Djebien on 16/05/13.
//  Copyright (c) 2013 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Photographer.h"
#import "CoreDataTableViewController.h"

@interface PhotosByPhotographerTableViewController : CoreDataTableViewController

@property (nonatomic, strong) Photographer *photographer;

@end
