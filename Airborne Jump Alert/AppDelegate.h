//
//  AppDelegate.h
//  Airborne Jump Alert
//
//  Created by SARFO KANTANKA FRIMPONG on 11/4/21.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

